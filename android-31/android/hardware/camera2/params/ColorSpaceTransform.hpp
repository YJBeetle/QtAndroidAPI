#pragma once

#include "../../../../JObject.hpp"

class JIntArray;
class JArray;
namespace android::util
{
	class Rational;
}
class JObject;
class JString;

namespace android::hardware::camera2::params
{
	class ColorSpaceTransform : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorSpaceTransform(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpaceTransform(QAndroidJniObject obj);
		
		// Constructors
		ColorSpaceTransform(JIntArray arg0);
		ColorSpaceTransform(JArray arg0);
		
		// Methods
		void copyElements(JIntArray arg0, jint arg1);
		void copyElements(JArray arg0, jint arg1);
		jboolean equals(JObject arg0);
		android::util::Rational getElement(jint arg0, jint arg1);
		jint hashCode();
		JString toString();
	};
} // namespace android::hardware::camera2::params

