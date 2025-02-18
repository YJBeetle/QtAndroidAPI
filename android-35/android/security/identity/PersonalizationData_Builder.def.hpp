#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::security::identity
{
	class AccessControlProfile;
}
namespace android::security::identity
{
	class PersonalizationData;
}
class JString;

namespace android::security::identity
{
	class PersonalizationData_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PersonalizationData_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PersonalizationData_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PersonalizationData_Builder();
		
		// Methods
		android::security::identity::PersonalizationData_Builder addAccessControlProfile(android::security::identity::AccessControlProfile arg0) const;
		android::security::identity::PersonalizationData build() const;
		android::security::identity::PersonalizationData_Builder putEntry(JString arg0, JString arg1, JObject arg2, JByteArray arg3) const;
	};
} // namespace android::security::identity

