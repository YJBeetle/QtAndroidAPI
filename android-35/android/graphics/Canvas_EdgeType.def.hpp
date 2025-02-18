#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class Canvas_EdgeType : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Canvas_EdgeType AA();
		static android::graphics::Canvas_EdgeType BW();
		
		// QJniObject forward
		template<typename ...Ts> explicit Canvas_EdgeType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Canvas_EdgeType(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::graphics::Canvas_EdgeType valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

