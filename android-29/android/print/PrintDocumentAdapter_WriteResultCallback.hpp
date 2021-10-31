#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::print
{
	class PrintDocumentAdapter_WriteResultCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		PrintDocumentAdapter_WriteResultCallback(QAndroidJniObject obj);
		// Constructors
		PrintDocumentAdapter_WriteResultCallback() = default;
		
		// Methods
		void onWriteCancelled();
		void onWriteFailed(jstring arg0);
		void onWriteFinished(jarray arg0);
	};
} // namespace android::print

