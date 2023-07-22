#pragma once

#include "../../JObject.hpp"

class JArray;
class JString;

namespace android::print
{
	class PrintDocumentAdapter_WriteResultCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintDocumentAdapter_WriteResultCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintDocumentAdapter_WriteResultCallback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void onWriteCancelled() const;
		void onWriteFailed(JString arg0) const;
		void onWriteFinished(JArray arg0) const;
	};
} // namespace android::print

