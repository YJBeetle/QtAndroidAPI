#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::os
{
	class StatFs : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StatFs(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StatFs(QJniObject obj);
		
		// Constructors
		StatFs(JString arg0);
		
		// Methods
		jint getAvailableBlocks() const;
		jlong getAvailableBlocksLong() const;
		jlong getAvailableBytes() const;
		jint getBlockCount() const;
		jlong getBlockCountLong() const;
		jint getBlockSize() const;
		jlong getBlockSizeLong() const;
		jint getFreeBlocks() const;
		jlong getFreeBlocksLong() const;
		jlong getFreeBytes() const;
		jlong getTotalBytes() const;
		void restat(JString arg0) const;
	};
} // namespace android::os

