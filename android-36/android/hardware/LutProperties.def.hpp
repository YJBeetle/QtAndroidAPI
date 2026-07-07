#pragma once

#include "../../JObject.hpp"

class JIntArray;

namespace android::hardware
{
	class LutProperties : public JObject
	{
	public:
		// Fields
		static jint ONE_DIMENSION();
		static jint SAMPLING_KEY_CIE_Y();
		static jint SAMPLING_KEY_MAX_RGB();
		static jint SAMPLING_KEY_RGB();
		static jint THREE_DIMENSION();
		
		// QJniObject forward
		template<typename ...Ts> explicit LutProperties(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LutProperties(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getDimension() const;
		JIntArray getSamplingKeys() const;
		jint getSize() const;
	};
} // namespace android::hardware

