#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::print
{
	class PrintAttributes;
}
namespace __jni_impl::android::print
{
	class PrintDocumentAdapter;
}
namespace __jni_impl::android::print
{
	class PrintJob;
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
		QAndroidJniObject getPrintJobs();
		QAndroidJniObject print(jstring arg0, __jni_impl::android::print::PrintDocumentAdapter arg1, __jni_impl::android::print::PrintAttributes arg2);
		QAndroidJniObject print(const QString &arg0, __jni_impl::android::print::PrintDocumentAdapter arg1, __jni_impl::android::print::PrintAttributes arg2);
	};
} // namespace __jni_impl::android::print

#include "./PrintAttributes.hpp"
#include "./PrintDocumentAdapter.hpp"
#include "./PrintJob.hpp"

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
	QAndroidJniObject PrintManager::getPrintJobs()
	{
		return __thiz.callObjectMethod(
			"getPrintJobs",
			"()Ljava/util/List;"
		);
	}
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
	QAndroidJniObject PrintManager::print(const QString &arg0, __jni_impl::android::print::PrintDocumentAdapter arg1, __jni_impl::android::print::PrintAttributes arg2)
	{
		return __thiz.callObjectMethod(
			"print",
			"(Ljava/lang/String;Landroid/print/PrintDocumentAdapter;Landroid/print/PrintAttributes;)Landroid/print/PrintJob;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
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

