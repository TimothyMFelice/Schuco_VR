// Fill out your copyright notice in the Description page of Project Settings.

#include "PDFLib.h"

#pragma warning(push)
#pragma warning(disable:4530)
#pragma warning(pop)

//#include <iostream>
//#include "Paths.h"
//#include "hpdf.h"

//void error_handler(HPDF_STATUS error_no, HPDF_STATUS detail_no, void *user_data)
//{
//	printf("ERROR: Error_No=%04X, Detail_No=%u\n", (HPDF_UINT)error_no, (HPDF_UINT)detail_no);
//	throw std::exception();
//}
//
//const char *font_list[] = {
//	"Courier",
//	"Courier-Bold",
//	"Courier-Oblique",
//	"Courier-BoldOblique",
//	"Helvetica",
//	"Helvetica-Bold",
//	"Helvetica-Oblique",
//	"Helvetica-BoldOblique",
//	"Times-Roman",
//	"Times-Bold",
//	"Times-Italic",
//	"Times-BoldItalic",
//	"Symbol",
//	"ZapfDingbats",
//	NULL
//};

void UPDFLib::ExportPDF()
{
	//// Load DLL
	//FString DllPath = "";//FPaths::GameDir() + "ThirdParty/LIBHARU/Binaries/libhpdf.dll";
	//void* DLLHandle = FPlatformProcess::GetDllHandle(*DllPath);
	//
	//// PDF Vars
	//FString OutPutFilePath = "";//FPaths::GameDir() + "fontdemo.pdf";
	//const char *page_title = "Font Demo";
	//HPDF_Doc  pdf;
	//HPDF_Page page;
	//HPDF_Font def_font;
	//HPDF_REAL tw;
	//HPDF_REAL height;
	//HPDF_REAL width;
	//HPDF_UINT i;
	//
	//pdf = HPDF_New(error_handler, NULL);
	//if (!pdf) {
	//	printf("error: cannot create PdfDoc object\n");
	//	return;
	//}
	//
	//try
	//{
	//	// Add Page
	//	page = HPDF_AddPage(pdf);
	//
	//	height = HPDF_Page_GetHeight(page);
	//	width = HPDF_Page_GetWidth(page);
	//
	//	// Print Lines of page
	//	HPDF_Page_SetLineWidth(page, 1);
	//	HPDF_Page_Rectangle(page, 50, 50, width - 100, height - 110);
	//	HPDF_Page_Stroke(page);
	//
	//	// Print Title of page
	//	def_font = HPDF_GetFont(pdf, "Helvetica", NULL);
	//	HPDF_Page_SetFontAndSize(page, def_font, 24);
	//
	//	tw = HPDF_Page_TextWidth(page, page_title);
	//	HPDF_Page_BeginText(page);
	//	HPDF_Page_MoveTextPos(page, (width - tw) / 2, height - 50);
	//	HPDF_Page_ShowText(page, page_title);
	//	HPDF_Page_EndText(page);
	//
	//	// SubTitle
	//	HPDF_Page_BeginText(page);
	//	HPDF_Page_MoveTextPos(page, 60, height - 80);
	//	HPDF_Page_SetFontAndSize(page, def_font, 16);
	//	HPDF_Page_ShowText(page, "<Standerd Type1 fonts samples>");
	//	HPDF_Page_EndText(page);
	//
	//	HPDF_Page_BeginText(page);
	//	HPDF_Page_MoveTextPos(page, 60, height - 105);
	//
	//	i = 0;
	//	while (font_list[i]) {
	//		const char* samp_text = "abcdefgABCDEFG12345!#$%&+-@?";
	//		HPDF_Font font = HPDF_GetFont(pdf, font_list[i], NULL);
	//
	//		// Print Label
	//		HPDF_Page_SetFontAndSize(page, def_font, 9);
	//		HPDF_Page_ShowText(page, font_list[i]);
	//		HPDF_Page_MoveTextPos(page, 0, -18);
	//
	//		// Print Text
	//		HPDF_Page_SetFontAndSize(page, font, 20);
	//		HPDF_Page_ShowText(page, samp_text);
	//		HPDF_Page_MoveTextPos(page, 0, -20);
	//
	//		i++;
	//	}
	//
	//	HPDF_Page_EndText(page);
	//
	//	HPDF_SaveToFile(pdf, TCHAR_TO_ANSI(*OutPutFilePath));
	//}
	//catch (const std::exception&)
	//{
	//	HPDF_Free(pdf);
	//	FPlatformProcess::FreeDllHandle(DLLHandle);
	//	return;
	//}
	//
	//// Free DLL
	//HPDF_Free(pdf);
	//FPlatformProcess::FreeDllHandle(DLLHandle);
}
