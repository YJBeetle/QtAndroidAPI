#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::service::autofill
{
	class UserData;
}
class JString;

namespace android::service::autofill
{
	class UserData_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UserData_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UserData_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		UserData_Builder(JString arg0, JString arg1, JString arg2);
		
		// Methods
		android::service::autofill::UserData_Builder add(JString arg0, JString arg1) const;
		android::service::autofill::UserData build() const;
		android::service::autofill::UserData_Builder setFieldClassificationAlgorithm(JString arg0, android::os::Bundle arg1) const;
	};
} // namespace android::service::autofill

