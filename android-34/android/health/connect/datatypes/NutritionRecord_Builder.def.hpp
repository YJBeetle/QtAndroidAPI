#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes
{
	class NutritionRecord;
}
namespace android::health::connect::datatypes::units
{
	class Energy;
}
namespace android::health::connect::datatypes::units
{
	class Mass;
}
class JString;
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class ZoneOffset;
}

namespace android::health::connect::datatypes
{
	class NutritionRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NutritionRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NutritionRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		NutritionRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2);
		
		// Methods
		android::health::connect::datatypes::NutritionRecord build() const;
		android::health::connect::datatypes::NutritionRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::NutritionRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::NutritionRecord_Builder setBiotin(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setCaffeine(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setCalcium(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setChloride(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setCholesterol(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setChromium(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setCopper(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setDietaryFiber(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setEnergy(android::health::connect::datatypes::units::Energy arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setEnergyFromFat(android::health::connect::datatypes::units::Energy arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setFolate(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setFolicAcid(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setIodine(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setIron(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setMagnesium(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setManganese(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setMealName(JString arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setMealType(jint arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setMolybdenum(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setMonounsaturatedFat(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setNiacin(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setPantothenicAcid(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setPhosphorus(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setPolyunsaturatedFat(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setPotassium(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setProtein(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setRiboflavin(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setSaturatedFat(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setSelenium(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setSodium(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setSugar(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setThiamin(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setTotalCarbohydrate(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setTotalFat(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setTransFat(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setUnsaturatedFat(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setVitaminA(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setVitaminB12(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setVitaminB6(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setVitaminC(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setVitaminD(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setVitaminE(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setVitaminK(android::health::connect::datatypes::units::Mass arg0) const;
		android::health::connect::datatypes::NutritionRecord_Builder setZinc(android::health::connect::datatypes::units::Mass arg0) const;
	};
} // namespace android::health::connect::datatypes

