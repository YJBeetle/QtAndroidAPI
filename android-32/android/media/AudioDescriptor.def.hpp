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
		AudioDescriptor(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JByteArray getDescriptor() const;
		jint getEncapsulationType() const;
		jint getStandard() const;
	};
} // namespace android::media

