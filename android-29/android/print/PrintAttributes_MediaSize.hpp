#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content::pm
{
	class PackageManager;
}

namespace android::print
{
	class PrintAttributes_MediaSize : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ISO_A0();
		static QAndroidJniObject ISO_A1();
		static QAndroidJniObject ISO_A10();
		static QAndroidJniObject ISO_A2();
		static QAndroidJniObject ISO_A3();
		static QAndroidJniObject ISO_A4();
		static QAndroidJniObject ISO_A5();
		static QAndroidJniObject ISO_A6();
		static QAndroidJniObject ISO_A7();
		static QAndroidJniObject ISO_A8();
		static QAndroidJniObject ISO_A9();
		static QAndroidJniObject ISO_B0();
		static QAndroidJniObject ISO_B1();
		static QAndroidJniObject ISO_B10();
		static QAndroidJniObject ISO_B2();
		static QAndroidJniObject ISO_B3();
		static QAndroidJniObject ISO_B4();
		static QAndroidJniObject ISO_B5();
		static QAndroidJniObject ISO_B6();
		static QAndroidJniObject ISO_B7();
		static QAndroidJniObject ISO_B8();
		static QAndroidJniObject ISO_B9();
		static QAndroidJniObject ISO_C0();
		static QAndroidJniObject ISO_C1();
		static QAndroidJniObject ISO_C10();
		static QAndroidJniObject ISO_C2();
		static QAndroidJniObject ISO_C3();
		static QAndroidJniObject ISO_C4();
		static QAndroidJniObject ISO_C5();
		static QAndroidJniObject ISO_C6();
		static QAndroidJniObject ISO_C7();
		static QAndroidJniObject ISO_C8();
		static QAndroidJniObject ISO_C9();
		static QAndroidJniObject JIS_B0();
		static QAndroidJniObject JIS_B1();
		static QAndroidJniObject JIS_B10();
		static QAndroidJniObject JIS_B2();
		static QAndroidJniObject JIS_B3();
		static QAndroidJniObject JIS_B4();
		static QAndroidJniObject JIS_B5();
		static QAndroidJniObject JIS_B6();
		static QAndroidJniObject JIS_B7();
		static QAndroidJniObject JIS_B8();
		static QAndroidJniObject JIS_B9();
		static QAndroidJniObject JIS_EXEC();
		static QAndroidJniObject JPN_CHOU2();
		static QAndroidJniObject JPN_CHOU3();
		static QAndroidJniObject JPN_CHOU4();
		static QAndroidJniObject JPN_HAGAKI();
		static QAndroidJniObject JPN_KAHU();
		static QAndroidJniObject JPN_KAKU2();
		static QAndroidJniObject JPN_OUFUKU();
		static QAndroidJniObject JPN_YOU4();
		static QAndroidJniObject NA_FOOLSCAP();
		static QAndroidJniObject NA_GOVT_LETTER();
		static QAndroidJniObject NA_INDEX_3X5();
		static QAndroidJniObject NA_INDEX_4X6();
		static QAndroidJniObject NA_INDEX_5X8();
		static QAndroidJniObject NA_JUNIOR_LEGAL();
		static QAndroidJniObject NA_LEDGER();
		static QAndroidJniObject NA_LEGAL();
		static QAndroidJniObject NA_LETTER();
		static QAndroidJniObject NA_MONARCH();
		static QAndroidJniObject NA_QUARTO();
		static QAndroidJniObject NA_TABLOID();
		static QAndroidJniObject OM_DAI_PA_KAI();
		static QAndroidJniObject OM_JUURO_KU_KAI();
		static QAndroidJniObject OM_PA_KAI();
		static QAndroidJniObject PRC_1();
		static QAndroidJniObject PRC_10();
		static QAndroidJniObject PRC_16K();
		static QAndroidJniObject PRC_2();
		static QAndroidJniObject PRC_3();
		static QAndroidJniObject PRC_4();
		static QAndroidJniObject PRC_5();
		static QAndroidJniObject PRC_6();
		static QAndroidJniObject PRC_7();
		static QAndroidJniObject PRC_8();
		static QAndroidJniObject PRC_9();
		static QAndroidJniObject ROC_16K();
		static QAndroidJniObject ROC_8K();
		static QAndroidJniObject UNKNOWN_LANDSCAPE();
		static QAndroidJniObject UNKNOWN_PORTRAIT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintAttributes_MediaSize(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrintAttributes_MediaSize(QAndroidJniObject obj);
		
		// Constructors
		PrintAttributes_MediaSize(jstring arg0, jstring arg1, jint arg2, jint arg3);
		
		// Methods
		QAndroidJniObject asLandscape();
		QAndroidJniObject asPortrait();
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

