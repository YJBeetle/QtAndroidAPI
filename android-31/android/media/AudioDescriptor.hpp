#pragma once

#include "../../JObject.hpp"

class JByteArray;

namespace android::media
{
	class AudioDescriptor : public JObject
	{
	public:
		// Fields
		static jint STANDARD_EDID();
		static jint STANDARD_NONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioDescriptor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioDescriptor(QJniObject obj);
		
		// Constructors
		
		// Methods
		JByteArray getDescriptor();
		jint getEncapsulationType();
		jint getStandard();
	};
} // namespace android::media

