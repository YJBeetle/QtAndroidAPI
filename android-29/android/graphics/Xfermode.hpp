#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Xfermode : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Xfermode(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Xfermode(QAndroidJniObject obj);
		
		// Constructors
		Xfermode();
		
		// Methods
	};
} // namespace android::graphics

