#pragma once

#include "../../../JObject.hpp"

class JArray;

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
		static JObject and_(JArray arg0);
		static JObject not_(JObject arg0);
		static JObject or_(JArray arg0);
	};
} // namespace android::service::autofill

