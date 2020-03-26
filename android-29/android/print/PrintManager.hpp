#pragma once

#ifndef ANDROID_PRINT_PRINTMANAGER
#define ANDROID_PRINT_PRINTMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::print
{
	class PrintJob;
}
namespace __jni_impl::android::print
{
	class PrintDocumentAdapter;
}
namespace __jni_impl::android::print
{
	class PrintAttributes;
}

namespace __jni_impl::android::print
{
	class PrintManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject print(jstring arg0, __jni_impl::android::print::PrintDocumentAdapter arg1, __jni_impl::android::print::PrintAttributes arg2);
		QAndroidJniObject getPrintJobs();
	};
} // namespace __jni_impl::android::print

#include "PrintJob.hpp"
#include "PrintDocumentAdapter.hpp"
#include "PrintAttributes.hpp"

namespace __jni_impl::android::print
{
	// Fields
	
	// Constructors
	void PrintManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PrintManager::print(jstring arg0, __jni_impl::android::print::PrintDocumentAdapter arg1, __jni_impl::android::print::PrintAttributes arg2)
	{
		return __thiz.callObjectMethod(
			"print",
			"(Ljava/lang/String;Landroid/print/PrintDocumentAdapter;Landroid/print/PrintAttributes;)Landroid/print/PrintJob;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject PrintManager::getPrintJobs()
	{
		return __thiz.callObjectMethod(
			"getPrintJobs",
			"()Ljava/util/List;"
		);
	}
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrintManager : public __jni_impl::android::print::PrintManager
	{
	public:
		PrintManager(QAndroidJniObject obj) { __thiz = obj; }
		PrintManager()
		{
			__constructor();
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PRINTMANAGER

