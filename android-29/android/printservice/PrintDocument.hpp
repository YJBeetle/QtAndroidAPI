#pragma once

#ifndef ANDROID_PRINTSERVICE_PRINTDOCUMENT
#define ANDROID_PRINTSERVICE_PRINTDOCUMENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::android::print
{
	class PrintDocumentInfo;
}

namespace __jni_impl::android::printservice
{
	class PrintDocument : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getData();
		QAndroidJniObject getInfo();
	};
} // namespace __jni_impl::android::printservice

#include "../os/ParcelFileDescriptor.hpp"
#include "../print/PrintDocumentInfo.hpp"

namespace __jni_impl::android::printservice
{
	// Fields
	
	// Constructors
	void PrintDocument::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.printservice.PrintDocument",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PrintDocument::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	QAndroidJniObject PrintDocument::getInfo()
	{
		return __thiz.callObjectMethod(
			"getInfo",
			"()Landroid/print/PrintDocumentInfo;"
		);
	}
} // namespace __jni_impl::android::printservice

namespace android::printservice
{
	class PrintDocument : public __jni_impl::android::printservice::PrintDocument
	{
	public:
		PrintDocument(QAndroidJniObject obj) { __thiz = obj; }
		PrintDocument()
		{
			__constructor();
		}
	};
} // namespace android::printservice

#endif // ANDROID_PRINTSERVICE_PRINTDOCUMENT

