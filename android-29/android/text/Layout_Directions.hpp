#pragma once

#include "../../JObject.hpp"

class JIntArray;

namespace android::text
{
	class Layout_Directions : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Layout_Directions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Layout_Directions(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::text

