#pragma once

#ifndef ANDROID_PRINT_PRINTATTRIBUTES_BUILDER
#define ANDROID_PRINT_PRINTATTRIBUTES_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::print
{
	class PrintAttributes;
}
namespace __jni_impl::android::print
{
	class PrintAttributes_MediaSize;
}
namespace __jni_impl::android::print
{
	class PrintAttributes_Resolution;
}
namespace __jni_impl::android::print
{
	class PrintAttributes_Margins;
}

namespace __jni_impl::android::print
{
	class PrintAttributes_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setColorMode(jint arg0);
		QAndroidJniObject setMediaSize(__jni_impl::android::print::PrintAttributes_MediaSize arg0);
		QAndroidJniObject setResolution(__jni_impl::android::print::PrintAttributes_Resolution arg0);
		QAndroidJniObject setDuplexMode(jint arg0);
		QAndroidJniObject setMinMargins(__jni_impl::android::print::PrintAttributes_Margins arg0);
	};
} // namespace __jni_impl::android::print

#include "PrintAttributes.hpp"
#include "PrintAttributes_MediaSize.hpp"
#include "PrintAttributes_Resolution.hpp"
#include "PrintAttributes_Margins.hpp"

namespace __jni_impl::android::print
{
	// Fields
	
	// Constructors
	void PrintAttributes_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintAttributes$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject PrintAttributes_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/print/PrintAttributes;"
		);
	}
	QAndroidJniObject PrintAttributes_Builder::setColorMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setColorMode",
			"(I)Landroid/print/PrintAttributes$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrintAttributes_Builder::setMediaSize(__jni_impl::android::print::PrintAttributes_MediaSize arg0)
	{
		return __thiz.callObjectMethod(
			"setMediaSize",
			"(Landroid/print/PrintAttributes$MediaSize;)Landroid/print/PrintAttributes$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PrintAttributes_Builder::setResolution(__jni_impl::android::print::PrintAttributes_Resolution arg0)
	{
		return __thiz.callObjectMethod(
			"setResolution",
			"(Landroid/print/PrintAttributes$Resolution;)Landroid/print/PrintAttributes$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PrintAttributes_Builder::setDuplexMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setDuplexMode",
			"(I)Landroid/print/PrintAttributes$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrintAttributes_Builder::setMinMargins(__jni_impl::android::print::PrintAttributes_Margins arg0)
	{
		return __thiz.callObjectMethod(
			"setMinMargins",
			"(Landroid/print/PrintAttributes$Margins;)Landroid/print/PrintAttributes$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrintAttributes_Builder : public __jni_impl::android::print::PrintAttributes_Builder
	{
	public:
		PrintAttributes_Builder(QAndroidJniObject obj) { __thiz = obj; }
		PrintAttributes_Builder()
		{
			__constructor();
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PRINTATTRIBUTES_BUILDER

