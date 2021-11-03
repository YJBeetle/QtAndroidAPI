#pragma once

#include "../../JObject.hpp"

namespace android::content::pm
{
	class PackageManager;
}

namespace android::print
{
	class PrintAttributes_MediaSize : public JObject
	{
	public:
		// Fields
		static android::print::PrintAttributes_MediaSize ISO_A0();
		static android::print::PrintAttributes_MediaSize ISO_A1();
		static android::print::PrintAttributes_MediaSize ISO_A10();
		static android::print::PrintAttributes_MediaSize ISO_A2();
		static android::print::PrintAttributes_MediaSize ISO_A3();
		static android::print::PrintAttributes_MediaSize ISO_A4();
		static android::print::PrintAttributes_MediaSize ISO_A5();
		static android::print::PrintAttributes_MediaSize ISO_A6();
		static android::print::PrintAttributes_MediaSize ISO_A7();
		static android::print::PrintAttributes_MediaSize ISO_A8();
		static android::print::PrintAttributes_MediaSize ISO_A9();
		static android::print::PrintAttributes_MediaSize ISO_B0();
		static android::print::PrintAttributes_MediaSize ISO_B1();
		static android::print::PrintAttributes_MediaSize ISO_B10();
		static android::print::PrintAttributes_MediaSize ISO_B2();
		static android::print::PrintAttributes_MediaSize ISO_B3();
		static android::print::PrintAttributes_MediaSize ISO_B4();
		static android::print::PrintAttributes_MediaSize ISO_B5();
		static android::print::PrintAttributes_MediaSize ISO_B6();
		static android::print::PrintAttributes_MediaSize ISO_B7();
		static android::print::PrintAttributes_MediaSize ISO_B8();
		static android::print::PrintAttributes_MediaSize ISO_B9();
		static android::print::PrintAttributes_MediaSize ISO_C0();
		static android::print::PrintAttributes_MediaSize ISO_C1();
		static android::print::PrintAttributes_MediaSize ISO_C10();
		static android::print::PrintAttributes_MediaSize ISO_C2();
		static android::print::PrintAttributes_MediaSize ISO_C3();
		static android::print::PrintAttributes_MediaSize ISO_C4();
		static android::print::PrintAttributes_MediaSize ISO_C5();
		static android::print::PrintAttributes_MediaSize ISO_C6();
		static android::print::PrintAttributes_MediaSize ISO_C7();
		static android::print::PrintAttributes_MediaSize ISO_C8();
		static android::print::PrintAttributes_MediaSize ISO_C9();
		static android::print::PrintAttributes_MediaSize JIS_B0();
		static android::print::PrintAttributes_MediaSize JIS_B1();
		static android::print::PrintAttributes_MediaSize JIS_B10();
		static android::print::PrintAttributes_MediaSize JIS_B2();
		static android::print::PrintAttributes_MediaSize JIS_B3();
		static android::print::PrintAttributes_MediaSize JIS_B4();
		static android::print::PrintAttributes_MediaSize JIS_B5();
		static android::print::PrintAttributes_MediaSize JIS_B6();
		static android::print::PrintAttributes_MediaSize JIS_B7();
		static android::print::PrintAttributes_MediaSize JIS_B8();
		static android::print::PrintAttributes_MediaSize JIS_B9();
		static android::print::PrintAttributes_MediaSize JIS_EXEC();
		static android::print::PrintAttributes_MediaSize JPN_CHOU2();
		static android::print::PrintAttributes_MediaSize JPN_CHOU3();
		static android::print::PrintAttributes_MediaSize JPN_CHOU4();
		static android::print::PrintAttributes_MediaSize JPN_HAGAKI();
		static android::print::PrintAttributes_MediaSize JPN_KAHU();
		static android::print::PrintAttributes_MediaSize JPN_KAKU2();
		static android::print::PrintAttributes_MediaSize JPN_OUFUKU();
		static android::print::PrintAttributes_MediaSize JPN_YOU4();
		static android::print::PrintAttributes_MediaSize NA_FOOLSCAP();
		static android::print::PrintAttributes_MediaSize NA_GOVT_LETTER();
		static android::print::PrintAttributes_MediaSize NA_INDEX_3X5();
		static android::print::PrintAttributes_MediaSize NA_INDEX_4X6();
		static android::print::PrintAttributes_MediaSize NA_INDEX_5X8();
		static android::print::PrintAttributes_MediaSize NA_JUNIOR_LEGAL();
		static android::print::PrintAttributes_MediaSize NA_LEDGER();
		static android::print::PrintAttributes_MediaSize NA_LEGAL();
		static android::print::PrintAttributes_MediaSize NA_LETTER();
		static android::print::PrintAttributes_MediaSize NA_MONARCH();
		static android::print::PrintAttributes_MediaSize NA_QUARTO();
		static android::print::PrintAttributes_MediaSize NA_TABLOID();
		static android::print::PrintAttributes_MediaSize OM_DAI_PA_KAI();
		static android::print::PrintAttributes_MediaSize OM_JUURO_KU_KAI();
		static android::print::PrintAttributes_MediaSize OM_PA_KAI();
		static android::print::PrintAttributes_MediaSize PRC_1();
		static android::print::PrintAttributes_MediaSize PRC_10();
		static android::print::PrintAttributes_MediaSize PRC_16K();
		static android::print::PrintAttributes_MediaSize PRC_2();
		static android::print::PrintAttributes_MediaSize PRC_3();
		static android::print::PrintAttributes_MediaSize PRC_4();
		static android::print::PrintAttributes_MediaSize PRC_5();
		static android::print::PrintAttributes_MediaSize PRC_6();
		static android::print::PrintAttributes_MediaSize PRC_7();
		static android::print::PrintAttributes_MediaSize PRC_8();
		static android::print::PrintAttributes_MediaSize PRC_9();
		static android::print::PrintAttributes_MediaSize ROC_16K();
		static android::print::PrintAttributes_MediaSize ROC_8K();
		static android::print::PrintAttributes_MediaSize UNKNOWN_LANDSCAPE();
		static android::print::PrintAttributes_MediaSize UNKNOWN_PORTRAIT();
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintAttributes_MediaSize(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintAttributes_MediaSize(QJniObject obj);
		
		// Constructors
		PrintAttributes_MediaSize(jstring arg0, jstring arg1, jint arg2, jint arg3);
		
		// Methods
		android::print::PrintAttributes_MediaSize asLandscape();
		android::print::PrintAttributes_MediaSize asPortrait();
		jboolean equals(jobject arg0);
		jint getHeightMils();
		jstring getId();
		jstring getLabel(android::content::pm::PackageManager arg0);
		jint getWidthMils();
		jint hashCode();
		jboolean isPortrait();
		jstring toString();
	};
} // namespace android::print

