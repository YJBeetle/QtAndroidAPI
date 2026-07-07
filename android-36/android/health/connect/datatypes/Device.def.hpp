#pragma once

#include "../../../../JObject.hpp"

class JObject;
class JString;

namespace android::health::connect::datatypes
{
	class Device : public JObject
	{
	public:
		// Fields
		static jint DEVICE_TYPE_CHEST_STRAP();
		static jint DEVICE_TYPE_FITNESS_BAND();
		static jint DEVICE_TYPE_HEAD_MOUNTED();
		static jint DEVICE_TYPE_PHONE();
		static jint DEVICE_TYPE_RING();
		static jint DEVICE_TYPE_SCALE();
		static jint DEVICE_TYPE_SMART_DISPLAY();
		static jint DEVICE_TYPE_UNKNOWN();
		static jint DEVICE_TYPE_WATCH();
		
		// QJniObject forward
		template<typename ...Ts> explicit Device(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Device(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getManufacturer() const;
		JString getModel() const;
		jint getType() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

