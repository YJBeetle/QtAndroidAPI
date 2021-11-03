#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class Region_Op : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Region_Op DIFFERENCE();
		static android::graphics::Region_Op INTERSECT();
		static android::graphics::Region_Op REPLACE();
		static android::graphics::Region_Op REVERSE_DIFFERENCE();
		static android::graphics::Region_Op UNION();
		static android::graphics::Region_Op XOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Region_Op(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Region_Op(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Region_Op valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

