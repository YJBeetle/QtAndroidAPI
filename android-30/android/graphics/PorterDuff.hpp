#pragma once

#include "../../JObject.hpp"


namespace android::graphics
{
	class PorterDuff : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PorterDuff(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PorterDuff(QAndroidJniObject obj);
		
		// Constructors
		PorterDuff();
		
		// Methods
	};
} // namespace android::graphics

