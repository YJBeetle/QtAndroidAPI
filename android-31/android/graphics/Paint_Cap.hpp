#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class Paint_Cap : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Paint_Cap BUTT();
		static android::graphics::Paint_Cap ROUND();
		static android::graphics::Paint_Cap SQUARE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Paint_Cap(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Paint_Cap(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::graphics::Paint_Cap valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

