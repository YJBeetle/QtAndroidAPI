#pragma once

#include "../../JObject.hpp"

namespace android::print
{
	class PrintDocumentInfo;
}
class JString;

namespace android::print
{
	class PrintDocumentAdapter_LayoutResultCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintDocumentAdapter_LayoutResultCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintDocumentAdapter_LayoutResultCallback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void onLayoutCancelled() const;
		void onLayoutFailed(JString arg0) const;
		void onLayoutFinished(android::print::PrintDocumentInfo arg0, jboolean arg1) const;
	};
} // namespace android::print

