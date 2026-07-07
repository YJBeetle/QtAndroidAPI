#pragma once

#include "../../../../JObject.hpp"

namespace android::service::settings::preferences
{
	class SetValueResult;
}

namespace android::service::settings::preferences
{
	class SetValueResult_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SetValueResult_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetValueResult_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SetValueResult_Builder(jint arg0);
		
		// Methods
		android::service::settings::preferences::SetValueResult build() const;
	};
} // namespace android::service::settings::preferences

