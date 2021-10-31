#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::service::autofill
{
	class Validators : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Validators(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Validators(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject _and(jarray arg0);
		static QAndroidJniObject _not(__JniBaseClass arg0);
		static QAndroidJniObject _or(jarray arg0);
	};
} // namespace android::service::autofill

