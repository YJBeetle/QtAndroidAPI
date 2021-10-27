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
		
		UserData_Builder(QAndroidJniObject obj);
		// Constructors
		UserData_Builder(jstring &arg0, jstring &arg1, jstring &arg2);
		UserData_Builder(const QString &arg0, const QString &arg1, const QString &arg2);
		UserData_Builder() = default;
		
		// Methods
		QAndroidJniObject add(jstring arg0, jstring arg1);
		QAndroidJniObject add(const QString &arg0, const QString &arg1);
		QAndroidJniObject build();
		QAndroidJniObject setFieldClassificationAlgorithm(jstring arg0, android::os::Bundle arg1);
		QAndroidJniObject setFieldClassificationAlgorithm(const QString &arg0, android::os::Bundle arg1);
		QAndroidJniObject setFieldClassificationAlgorithmForCategory(jstring arg0, jstring arg1, android::os::Bundle arg2);
		QAndroidJniObject setFieldClassificationAlgorithmForCategory(const QString &arg0, const QString &arg1, android::os::Bundle arg2);
	};
} // namespace android::service::autofill

