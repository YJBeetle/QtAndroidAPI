#pragma once

#include "./TypeConverter.hpp"

class JClass;
class JObject;

namespace android::animation
{
	class BidirectionalTypeConverter : public android::animation::TypeConverter
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BidirectionalTypeConverter(const char *className, const char *sig, Ts...agv) : android::animation::TypeConverter(className, sig, std::forward<Ts>(agv)...) {}
		BidirectionalTypeConverter(QJniObject obj);
		
		// Constructors
		BidirectionalTypeConverter(JClass arg0, JClass arg1);
		
		// Methods
		JObject convertBack(JObject arg0) const;
		android::animation::BidirectionalTypeConverter invert() const;
	};
} // namespace android::animation

