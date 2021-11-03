#pragma once

#include "../../../JObject.hpp"


namespace android::service::autofill
{
	class Validators : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Validators(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Validators(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject _and(jarray arg0);
		static JObject _not(JObject arg0);
		static JObject _or(jarray arg0);
	};
} // namespace android::service::autofill

