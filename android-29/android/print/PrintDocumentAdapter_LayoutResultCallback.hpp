#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::print
{
	class PrintDocumentInfo;
}

namespace android::print
{
	class PrintDocumentAdapter_LayoutResultCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		PrintDocumentAdapter_LayoutResultCallback(QAndroidJniObject obj);
		// Constructors
		PrintDocumentAdapter_LayoutResultCallback() = default;
		
		// Methods
		void onLayoutCancelled();
		void onLayoutFailed(jstring arg0);
		void onLayoutFinished(android::print::PrintDocumentInfo arg0, jboolean arg1);
	};
} // namespace android::print

