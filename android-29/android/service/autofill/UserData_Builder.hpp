#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class UserData_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UserData_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UserData_Builder(QAndroidJniObject obj);
		
		// Constructors
		UserData_Builder(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
		QAndroidJniObject add(jstring arg0, jstring arg1);
		QAndroidJniObject build();
		QAndroidJniObject setFieldClassificationAlgorithm(jstring arg0, android::os::Bundle arg1);
		QAndroidJniObject setFieldClassificationAlgorithmForCategory(jstring arg0, jstring arg1, android::os::Bundle arg2);
	};
} // namespace android::service::autofill

