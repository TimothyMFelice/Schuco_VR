// Fill out your copyright notice in the Description page of Project Settings.

#include "BPFL_Functions.h"

////////////////////////////////////////////
// Get Binding ID
///////////////////////////////////////////
FMovieSceneObjectBindingID UBPFL_Functions::GetBindingID(ULevelSequence* inSequence, FText inObjectDisplayName)
{
	if (!inSequence || inObjectDisplayName.IsEmpty())
		return FMovieSceneObjectBindingID();

	UMovieScene* MovieScene = inSequence->GetMovieScene();

	int32 PossableCount = MovieScene->GetPossessableCount();
	for (int32 Index = 0; Index < PossableCount; Index++)
	{
		const FMovieScenePossessable& Possessable = MovieScene->GetPossessable(Index);
		if (!inSequence->CanRebindPossessable(Possessable))
			continue;

		FGuid ObjectGuid	= Possessable.GetGuid();
		FText DisplayName	= MovieScene->GetObjectDisplayName(ObjectGuid);

		FMovieSceneObjectBindingID BindingID(ObjectGuid, MovieSceneSequenceID::Root);
		if (inObjectDisplayName.EqualToCaseIgnored(DisplayName))
			return BindingID;
	}

	return FMovieSceneObjectBindingID();
}
