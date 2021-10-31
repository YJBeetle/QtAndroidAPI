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
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintDocumentAdapter_LayoutResultCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrintDocumentAdapter_LayoutResultCallback(QJniObject obj);
		
		// Constructors
		
		// Methods
		void onLayoutCancelled();
		void onLayoutFailed(jstring arg0);
		void onLayoutFinished(android::print::PrintDocumentInfo arg0, jboolean arg1);
	};
} // namespace android::print

