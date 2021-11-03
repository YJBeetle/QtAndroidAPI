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
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintDocumentAdapter_WriteResultCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintDocumentAdapter_WriteResultCallback(QJniObject obj);
		
		// Constructors
		
		// Methods
		void onWriteCancelled() const;
		void onWriteFailed(JString arg0) const;
		void onWriteFinished(JArray arg0) const;
	};
} // namespace android::print

