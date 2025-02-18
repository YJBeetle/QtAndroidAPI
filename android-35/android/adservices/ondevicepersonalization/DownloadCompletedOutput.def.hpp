#pragma once

#include "../../../JObject.hpp"

class JObject;

namespace android::adservices::ondevicepersonalization
{
	class DownloadCompletedOutput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DownloadCompletedOutput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DownloadCompletedOutput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getRetainedKeys() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

