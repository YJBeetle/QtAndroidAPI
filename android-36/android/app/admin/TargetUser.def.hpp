#pragma once

#include "../../../JObject.hpp"

class JObject;

namespace android::app::admin
{
	class TargetUser : public JObject
	{
	public:
		// Fields
		static android::app::admin::TargetUser GLOBAL();
		static android::app::admin::TargetUser LOCAL_USER();
		static android::app::admin::TargetUser PARENT_USER();
		static android::app::admin::TargetUser UNKNOWN_USER();
		
		// QJniObject forward
		template<typename ...Ts> explicit TargetUser(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TargetUser(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
	};
} // namespace android::app::admin

