#pragma once

#include "../../../JObject.hpp"

namespace android::media::metrics
{
	class LogSessionId;
}
namespace android::os
{
	class PersistableBundle;
}
class JObject;
class JString;

namespace android::media::metrics
{
	class BundleSession : public JObject
	{
	public:
		// Fields
		static JString KEY_STATSD_ATOM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BundleSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BundleSession(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		jboolean equals(JObject arg0) const;
		android::media::metrics::LogSessionId getSessionId() const;
		jint hashCode() const;
		void reportBundleMetrics(android::os::PersistableBundle arg0) const;
	};
} // namespace android::media::metrics

