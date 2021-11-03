#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class Bitmap_CompressFormat : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Bitmap_CompressFormat JPEG();
		static android::graphics::Bitmap_CompressFormat PNG();
		static android::graphics::Bitmap_CompressFormat WEBP();
		
		// QJniObject forward
		template<typename ...Ts> explicit Bitmap_CompressFormat(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Bitmap_CompressFormat(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Bitmap_CompressFormat valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

