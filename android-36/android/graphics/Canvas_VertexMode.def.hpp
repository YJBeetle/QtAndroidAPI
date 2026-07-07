#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class Canvas_VertexMode : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Canvas_VertexMode TRIANGLES();
		static android::graphics::Canvas_VertexMode TRIANGLE_FAN();
		static android::graphics::Canvas_VertexMode TRIANGLE_STRIP();
		
		// QJniObject forward
		template<typename ...Ts> explicit Canvas_VertexMode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Canvas_VertexMode(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::graphics::Canvas_VertexMode valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

