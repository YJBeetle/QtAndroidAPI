#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JIntArray;
namespace android::graphics
{
	class Bitmap_CompressFormat;
}
namespace android::graphics
{
	class Bitmap_Config;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class ColorSpace;
}
namespace android::graphics
{
	class Matrix;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class Picture;
}
namespace android::os
{
	class Parcel;
}
namespace android::util
{
	class DisplayMetrics;
}
namespace java::io
{
	class OutputStream;
}
namespace java::nio
{
	class Buffer;
}

namespace android::graphics
{
	class Bitmap : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint DENSITY_NONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Bitmap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Bitmap(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Bitmap createBitmap(android::graphics::Bitmap arg0);
		static android::graphics::Bitmap createBitmap(android::graphics::Picture arg0);
		static android::graphics::Bitmap createBitmap(jint arg0, jint arg1, android::graphics::Bitmap_Config arg2);
		static android::graphics::Bitmap createBitmap(JIntArray arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3);
		static android::graphics::Bitmap createBitmap(android::graphics::Picture arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3);
		static android::graphics::Bitmap createBitmap(android::util::DisplayMetrics arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3);
		static android::graphics::Bitmap createBitmap(jint arg0, jint arg1, android::graphics::Bitmap_Config arg2, jboolean arg3);
		static android::graphics::Bitmap createBitmap(android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static android::graphics::Bitmap createBitmap(android::util::DisplayMetrics arg0, JIntArray arg1, jint arg2, jint arg3, android::graphics::Bitmap_Config arg4);
		static android::graphics::Bitmap createBitmap(android::util::DisplayMetrics arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3, jboolean arg4);
		static android::graphics::Bitmap createBitmap(jint arg0, jint arg1, android::graphics::Bitmap_Config arg2, jboolean arg3, android::graphics::ColorSpace arg4);
		static android::graphics::Bitmap createBitmap(JIntArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Bitmap_Config arg5);
		static android::graphics::Bitmap createBitmap(android::util::DisplayMetrics arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3, jboolean arg4, android::graphics::ColorSpace arg5);
		static android::graphics::Bitmap createBitmap(android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Matrix arg5, jboolean arg6);
		static android::graphics::Bitmap createBitmap(android::util::DisplayMetrics arg0, JIntArray arg1, jint arg2, jint arg3, jint arg4, jint arg5, android::graphics::Bitmap_Config arg6);
		static android::graphics::Bitmap createScaledBitmap(android::graphics::Bitmap arg0, jint arg1, jint arg2, jboolean arg3);
		jboolean compress(android::graphics::Bitmap_CompressFormat arg0, jint arg1, java::io::OutputStream arg2) const;
		android::graphics::Bitmap copy(android::graphics::Bitmap_Config arg0, jboolean arg1) const;
		void copyPixelsFromBuffer(java::nio::Buffer arg0) const;
		void copyPixelsToBuffer(java::nio::Buffer arg0) const;
		jint describeContents() const;
		void eraseColor(jint arg0) const;
		android::graphics::Bitmap extractAlpha() const;
		android::graphics::Bitmap extractAlpha(android::graphics::Paint arg0, JIntArray arg1) const;
		jint getAllocationByteCount() const;
		jint getByteCount() const;
		android::graphics::ColorSpace getColorSpace() const;
		android::graphics::Bitmap_Config getConfig() const;
		jint getDensity() const;
		jint getGenerationId() const;
		jint getHeight() const;
		JByteArray getNinePatchChunk() const;
		jint getPixel(jint arg0, jint arg1) const;
		void getPixels(JIntArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6) const;
		jint getRowBytes() const;
		jint getScaledHeight(android::graphics::Canvas arg0) const;
		jint getScaledHeight(android::util::DisplayMetrics arg0) const;
		jint getScaledHeight(jint arg0) const;
		jint getScaledWidth(android::graphics::Canvas arg0) const;
		jint getScaledWidth(android::util::DisplayMetrics arg0) const;
		jint getScaledWidth(jint arg0) const;
		jint getWidth() const;
		jboolean hasAlpha() const;
		jboolean hasMipMap() const;
		jboolean isMutable() const;
		jboolean isPremultiplied() const;
		jboolean isRecycled() const;
		void prepareToDraw() const;
		void reconfigure(jint arg0, jint arg1, android::graphics::Bitmap_Config arg2) const;
		void recycle() const;
		jboolean sameAs(android::graphics::Bitmap arg0) const;
		void setConfig(android::graphics::Bitmap_Config arg0) const;
		void setDensity(jint arg0) const;
		void setHasAlpha(jboolean arg0) const;
		void setHasMipMap(jboolean arg0) const;
		void setHeight(jint arg0) const;
		void setPixel(jint arg0, jint arg1, jint arg2) const;
		void setPixels(JIntArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6) const;
		void setPremultiplied(jboolean arg0) const;
		void setWidth(jint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics

