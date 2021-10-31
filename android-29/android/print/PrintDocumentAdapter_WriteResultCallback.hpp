#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::print
{
	class PrintDocumentAdapter_WriteResultCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintDocumentAdapter_WriteResultCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrintDocumentAdapter_WriteResultCallback(QJniObject obj);
		
		// Constructors
		
		// Methods
		void onWriteCancelled();
		void onWriteFailed(jstring arg0);
		void onWriteFinished(jarray arg0);
	};
} // namespace android::print

