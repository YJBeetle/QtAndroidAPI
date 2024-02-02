#pragma once

#include "../../../JObject.hpp"

namespace android::app::admin
{
	class PolicyUpdateResult : public JObject
	{
	public:
		// Fields
		static jint RESULT_FAILURE_CONFLICTING_ADMIN_POLICY();
		static jint RESULT_FAILURE_HARDWARE_LIMITATION();
		static jint RESULT_FAILURE_STORAGE_LIMIT_REACHED();
		static jint RESULT_FAILURE_UNKNOWN();
		static jint RESULT_POLICY_CLEARED();
		static jint RESULT_POLICY_SET();
		
		// QJniObject forward
		template<typename ...Ts> explicit PolicyUpdateResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PolicyUpdateResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PolicyUpdateResult(jint arg0);
		
		// Methods
		jint getResultCode() const;
	};
} // namespace android::app::admin

