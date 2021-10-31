#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::service::autofill
{
	class Validators : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Validators(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Validators(QJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass _and(jarray arg0);
		static __JniBaseClass _not(__JniBaseClass arg0);
		static __JniBaseClass _or(jarray arg0);
	};
} // namespace android::service::autofill

