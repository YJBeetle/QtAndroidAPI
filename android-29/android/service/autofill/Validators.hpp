#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::service::autofill
{
	class Validators : public __JniBaseClass
	{
	public:
		// Fields
		
		Validators(QAndroidJniObject obj);
		// Constructors
		Validators() = default;
		
		// Methods
		static QAndroidJniObject _and(jarray arg0);
		static QAndroidJniObject _not(__JniBaseClass arg0);
		static QAndroidJniObject _or(jarray arg0);
	};
} // namespace android::service::autofill

