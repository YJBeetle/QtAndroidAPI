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

namespace android::service::autofill
{
	class UserData_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UserData_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UserData_Builder(QJniObject obj);
		
		// Constructors
		UserData_Builder(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
		android::service::autofill::UserData_Builder add(jstring arg0, jstring arg1);
		android::service::autofill::UserData build();
		android::service::autofill::UserData_Builder setFieldClassificationAlgorithm(jstring arg0, android::os::Bundle arg1);
	};
} // namespace android::service::autofill

