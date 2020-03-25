#pragma once

#ifndef ANDROID_PRINT_PRINTATTRIBUTES_MEDIASIZE
#define ANDROID_PRINT_PRINTATTRIBUTES_MEDIASIZE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::pm
{
	class PackageManager;
}

namespace __jni_impl::android::print
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
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getId();
		jint getWidthMils();
		jint getHeightMils();
		jboolean isPortrait();
		QAndroidJniObject asPortrait();
		QAndroidJniObject asLandscape();
		QAndroidJniObject getLabel(__jni_impl::android::content::pm::PackageManager arg0);
	};
} // namespace __jni_impl::android::print

#include "../content/pm/PackageManager.hpp"

namespace __jni_impl::android::print
{
	// Fields
	QAndroidJniObject PrintAttributes_MediaSize::ISO_A0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_A0",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_A1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_A1",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_A10()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_A10",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_A2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_A2",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_A3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_A3",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_A4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_A4",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_A5()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_A5",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_A6()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_A6",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_A7()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_A7",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_A8()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_A8",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_A9()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_A9",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_B0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_B0",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_B1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_B1",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_B10()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_B10",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_B2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_B2",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_B3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_B3",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_B4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_B4",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_B5()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_B5",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_B6()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_B6",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_B7()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_B7",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_B8()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_B8",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_B9()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_B9",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_C0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_C0",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_C1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_C1",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_C10()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_C10",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_C2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_C2",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_C3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_C3",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_C4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_C4",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_C5()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_C5",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_C6()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_C6",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_C7()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_C7",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_C8()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_C8",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ISO_C9()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ISO_C9",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JIS_B0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JIS_B0",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JIS_B1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JIS_B1",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JIS_B10()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JIS_B10",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JIS_B2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JIS_B2",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JIS_B3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JIS_B3",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JIS_B4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JIS_B4",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JIS_B5()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JIS_B5",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JIS_B6()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JIS_B6",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JIS_B7()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JIS_B7",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JIS_B8()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JIS_B8",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JIS_B9()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JIS_B9",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JIS_EXEC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JIS_EXEC",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JPN_CHOU2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JPN_CHOU2",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JPN_CHOU3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JPN_CHOU3",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JPN_CHOU4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JPN_CHOU4",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JPN_HAGAKI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JPN_HAGAKI",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JPN_KAHU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JPN_KAHU",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JPN_KAKU2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JPN_KAKU2",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JPN_OUFUKU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JPN_OUFUKU",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::JPN_YOU4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"JPN_YOU4",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::NA_FOOLSCAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"NA_FOOLSCAP",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::NA_GOVT_LETTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"NA_GOVT_LETTER",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::NA_INDEX_3X5()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"NA_INDEX_3X5",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::NA_INDEX_4X6()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"NA_INDEX_4X6",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::NA_INDEX_5X8()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"NA_INDEX_5X8",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::NA_JUNIOR_LEGAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"NA_JUNIOR_LEGAL",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::NA_LEDGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"NA_LEDGER",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::NA_LEGAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"NA_LEGAL",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::NA_LETTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"NA_LETTER",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::NA_MONARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"NA_MONARCH",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::NA_QUARTO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"NA_QUARTO",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::NA_TABLOID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"NA_TABLOID",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::OM_DAI_PA_KAI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"OM_DAI_PA_KAI",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::OM_JUURO_KU_KAI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"OM_JUURO_KU_KAI",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::OM_PA_KAI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"OM_PA_KAI",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::PRC_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"PRC_1",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::PRC_10()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"PRC_10",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::PRC_16K()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"PRC_16K",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::PRC_2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"PRC_2",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::PRC_3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"PRC_3",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::PRC_4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"PRC_4",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::PRC_5()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"PRC_5",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::PRC_6()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"PRC_6",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::PRC_7()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"PRC_7",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::PRC_8()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"PRC_8",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::PRC_9()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"PRC_9",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ROC_16K()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ROC_16K",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::ROC_8K()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"ROC_8K",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::UNKNOWN_LANDSCAPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"UNKNOWN_LANDSCAPE",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::UNKNOWN_PORTRAIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$MediaSize",
			"UNKNOWN_PORTRAIT",
			"Landroid/print/PrintAttributes$MediaSize;");
	}
	
	// Constructors
	void PrintAttributes_MediaSize::__constructor(jstring arg0, jstring arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintAttributes$MediaSize",
			"(Ljava/lang/String;Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	
	// Methods
	jboolean PrintAttributes_MediaSize::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject PrintAttributes_MediaSize::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint PrintAttributes_MediaSize::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject PrintAttributes_MediaSize::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;");
	}
	jint PrintAttributes_MediaSize::getWidthMils()
	{
		return __thiz.callMethod<jint>(
			"getWidthMils",
			"()I");
	}
	jint PrintAttributes_MediaSize::getHeightMils()
	{
		return __thiz.callMethod<jint>(
			"getHeightMils",
			"()I");
	}
	jboolean PrintAttributes_MediaSize::isPortrait()
	{
		return __thiz.callMethod<jboolean>(
			"isPortrait",
			"()Z");
	}
	QAndroidJniObject PrintAttributes_MediaSize::asPortrait()
	{
		return __thiz.callObjectMethod(
			"asPortrait",
			"()Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::asLandscape()
	{
		return __thiz.callObjectMethod(
			"asLandscape",
			"()Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes_MediaSize::getLabel(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrintAttributes_MediaSize : public __jni_impl::android::print::PrintAttributes_MediaSize
	{
	public:
		PrintAttributes_MediaSize(QAndroidJniObject obj) { __thiz = obj; }
		PrintAttributes_MediaSize(jstring arg0, jstring arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PRINTATTRIBUTES_MEDIASIZE

