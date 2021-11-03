#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class Paint_Join : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Paint_Join BEVEL();
		static android::graphics::Paint_Join MITER();
		static android::graphics::Paint_Join ROUND();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Paint_Join(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Paint_Join(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Paint_Join valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

