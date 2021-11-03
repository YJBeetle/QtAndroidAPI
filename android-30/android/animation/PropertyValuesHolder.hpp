#pragma once

#include "../../JObject.hpp"

class JFloatArray;
class JIntArray;
class JArray;
class JObjectArray;
class JArray;
class JArray;
namespace android::animation
{
	class TypeConverter;
}
namespace android::graphics
{
	class Path;
}
namespace android::util
{
	class Property;
}
class JObject;
class JString;

namespace android::animation
{
	class PropertyValuesHolder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PropertyValuesHolder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PropertyValuesHolder(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::animation::PropertyValuesHolder ofFloat(android::util::Property arg0, JFloatArray arg1);
		static android::animation::PropertyValuesHolder ofFloat(JString arg0, JFloatArray arg1);
		static android::animation::PropertyValuesHolder ofInt(android::util::Property arg0, JIntArray arg1);
		static android::animation::PropertyValuesHolder ofInt(JString arg0, JIntArray arg1);
		static android::animation::PropertyValuesHolder ofKeyframe(android::util::Property arg0, JArray arg1);
		static android::animation::PropertyValuesHolder ofKeyframe(JString arg0, JArray arg1);
		static android::animation::PropertyValuesHolder ofMultiFloat(JString arg0, JArray arg1);
		static android::animation::PropertyValuesHolder ofMultiFloat(JString arg0, android::graphics::Path arg1);
		static android::animation::PropertyValuesHolder ofMultiFloat(JString arg0, android::animation::TypeConverter arg1, JObject arg2, JArray arg3);
		static android::animation::PropertyValuesHolder ofMultiFloat(JString arg0, android::animation::TypeConverter arg1, JObject arg2, JObjectArray arg3);
		static android::animation::PropertyValuesHolder ofMultiInt(JString arg0, JArray arg1);
		static android::animation::PropertyValuesHolder ofMultiInt(JString arg0, android::graphics::Path arg1);
		static android::animation::PropertyValuesHolder ofMultiInt(JString arg0, android::animation::TypeConverter arg1, JObject arg2, JArray arg3);
		static android::animation::PropertyValuesHolder ofMultiInt(JString arg0, android::animation::TypeConverter arg1, JObject arg2, JObjectArray arg3);
		static android::animation::PropertyValuesHolder ofObject(android::util::Property arg0, android::animation::TypeConverter arg1, android::graphics::Path arg2);
		static android::animation::PropertyValuesHolder ofObject(android::util::Property arg0, JObject arg1, JObjectArray arg2);
		static android::animation::PropertyValuesHolder ofObject(JString arg0, android::animation::TypeConverter arg1, android::graphics::Path arg2);
		static android::animation::PropertyValuesHolder ofObject(JString arg0, JObject arg1, JObjectArray arg2);
		static android::animation::PropertyValuesHolder ofObject(android::util::Property arg0, android::animation::TypeConverter arg1, JObject arg2, JObjectArray arg3);
		android::animation::PropertyValuesHolder clone();
		JString getPropertyName();
		void setConverter(android::animation::TypeConverter arg0);
		void setEvaluator(JObject arg0);
		void setFloatValues(JFloatArray arg0);
		void setIntValues(JIntArray arg0);
		void setKeyframes(JArray arg0);
		void setObjectValues(JObjectArray arg0);
		void setProperty(android::util::Property arg0);
		void setPropertyName(JString arg0);
		JString toString();
	};
} // namespace android::animation

