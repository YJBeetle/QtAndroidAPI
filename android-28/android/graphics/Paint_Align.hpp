#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class Paint_Align : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Paint_Align CENTER();
		static android::graphics::Paint_Align LEFT();
		static android::graphics::Paint_Align RIGHT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Paint_Align(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Paint_Align(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Paint_Align valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

