#pragma once

#include "../../JObject.hpp"
#include "./TypeConverter.hpp"


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
		BidirectionalTypeConverter(jclass arg0, jclass arg1);
		
		// Methods
		jobject convertBack(jobject arg0);
		android::animation::BidirectionalTypeConverter invert();
	};
} // namespace android::animation

