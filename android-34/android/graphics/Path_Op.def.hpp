#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class Path_Op : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Path_Op DIFFERENCE();
		static android::graphics::Path_Op INTERSECT();
		static android::graphics::Path_Op REVERSE_DIFFERENCE();
		static android::graphics::Path_Op UNION();
		static android::graphics::Path_Op XOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Path_Op(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Path_Op(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::graphics::Path_Op valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

