#pragma once

#include "../../JObject.hpp"


namespace android::text
{
	class NoCopySpan_Concrete : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NoCopySpan_Concrete(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NoCopySpan_Concrete(QAndroidJniObject obj);
		
		// Constructors
		NoCopySpan_Concrete();
		
		// Methods
	};
} // namespace android::text

