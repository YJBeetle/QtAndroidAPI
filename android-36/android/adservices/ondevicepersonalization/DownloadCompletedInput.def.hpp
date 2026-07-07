#pragma once

#include "../../../JObject.hpp"

class JObject;

namespace android::adservices::ondevicepersonalization
{
	class DownloadCompletedInput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DownloadCompletedInput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DownloadCompletedInput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DownloadCompletedInput(JObject arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getDownloadedContents() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

